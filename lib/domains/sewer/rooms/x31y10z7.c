inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 10, 7 }));
  set_short( "Passage - x31y10z7" );
set_objects( DIR+"/monsters/rarmella.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y10z7.c",
  "south" : DIR+"/rooms/x31y9z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
