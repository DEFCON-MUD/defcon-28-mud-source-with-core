inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 5, 5, -1 }));
  set_dimensions(({ 10, 10 }));

  set_short( "Labyrinth" );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^" );

  set_objects(
    DIR+"/npc/glorzo.c"
  );
 set_exits( ([
  "southwest" : DIR+"/rooms/4_6_-1.c",
  "north" : DIR+"/rooms/5_4_-1.c",
  "northeast" : DIR+"/rooms/6_4_-1.c"
  ]) );

}

