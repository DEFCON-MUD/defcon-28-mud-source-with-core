inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 36, 54, -3 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Hallway" );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^" );

  set_objects(
    DIR+"/npc/goon.c"
  );
 set_exits( ([
  "west" : DIR+"/rooms/35_54_-3.c",
  "east" : DIR+"/rooms/37_54_-3.c"
  ]) );

}

