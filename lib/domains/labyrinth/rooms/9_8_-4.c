inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 9, 8, -4 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Hallway" );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^" );

  set_objects(
    DIR+"/npc/dba.c"
  );
 set_exits( ([
  "south" : DIR+"/rooms/9_9_-4.c",
  "east" : DIR+"/rooms/10_8_-4.c"
  ]) );

}

