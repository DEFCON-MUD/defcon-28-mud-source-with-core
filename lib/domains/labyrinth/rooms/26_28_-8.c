inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 26, 28, -8 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Hallway" );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crap in this pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^" );

  set_objects(
    DIR+"/npc/salesdroid.c"
  );
 set_exits( ([
  "west" : DIR+"/rooms/25_28_-8.c",
  "east" : DIR+"/rooms/27_28_-8.c"
  ]) );

}

