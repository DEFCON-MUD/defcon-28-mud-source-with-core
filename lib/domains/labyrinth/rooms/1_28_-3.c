inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 1, 28, -3 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Passage" );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crap in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^" );

  set_objects(
    DIR+"/npc/teacher.c"
  );
 set_exits( ([
  "south" : DIR+"/rooms/1_29_-3.c",
  "north" : DIR+"/rooms/1_27_-3.c"
  ]) );

}

