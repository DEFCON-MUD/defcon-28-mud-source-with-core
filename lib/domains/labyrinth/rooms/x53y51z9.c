inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 51, 9 }));
  set_short( "Hallway - x53y51z9" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y52z9.c",
  "south" : DIR+"/rooms/x53y50z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
