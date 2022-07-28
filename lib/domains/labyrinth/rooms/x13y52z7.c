inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 52, 7 }));
  set_short( "Hallway - x13y52z7" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y52z7.c",
  "north" : DIR+"/rooms/x13y53z7.c",
  "south" : DIR+"/rooms/x13y51z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
