inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 52, 9 }));
  set_short( "Passage - x7y52z9" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y53z9.c",
  "south" : DIR+"/rooms/x7y51z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
