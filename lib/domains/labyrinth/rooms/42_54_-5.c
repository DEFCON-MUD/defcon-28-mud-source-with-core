inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 42, 54, -5 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Passage" );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the pile of GPU's that burned so bright they went radioactive in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^" );

  set_objects(
    DIR+"/npc/monkey.c"
  );
 set_exits( ([
  "west" : DIR+"/rooms/41_54_-5.c",
  "east" : DIR+"/rooms/43_54_-5.c"
  ]) );

}

