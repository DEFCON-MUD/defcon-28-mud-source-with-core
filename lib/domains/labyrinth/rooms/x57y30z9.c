inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 30, 9 }));
  set_short( "Hallway - x57y30z9" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y30z9.c",
  "east" : DIR+"/rooms/x58y30z9.c",
  "south" : DIR+"/rooms/x57y29z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
