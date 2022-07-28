inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 52, 7 }));
  set_short( "Corridor - x49y52z7" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y53z7.c",
  "south" : DIR+"/rooms/x49y51z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
