inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 50, 48, -3 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Passage" );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crappy sales material in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^" );

  set_objects(
    DIR+"/npc/enforcer.c"
  );
 set_exits( ([
  "west" : DIR+"/rooms/49_48_-3.c",
  "east" : DIR+"/rooms/51_48_-3.c"
  ]) );

}

