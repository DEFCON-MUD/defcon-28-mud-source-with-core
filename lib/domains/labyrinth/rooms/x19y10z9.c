inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 10, 9 }));
  set_short( "Passage - x19y10z9" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y10z9.c",
  "south" : DIR+"/rooms/x19y9z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
