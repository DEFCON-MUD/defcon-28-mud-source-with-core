inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 5, 42, -2 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Passage" );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the glorzo in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^" );

  set_objects(
    DIR+"/npc/analyst.c"
  );
 set_exits( ([
  "east" : DIR+"/rooms/6_42_-2.c",
  "north" : DIR+"/rooms/5_41_-2.c"
  ]) );

}

