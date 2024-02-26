inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 10, 4 }));
  set_short( "Hallway - x45y10z4" );
set_objects( DIR+"/monsters/loser.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y11z4.c",
  "south" : DIR+"/rooms/x45y9z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the glorzo in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
