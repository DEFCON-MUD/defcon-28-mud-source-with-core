inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 6, 4 }));
  set_short( "Hallway - x17y6z4" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y6z4.c",
  "north" : DIR+"/rooms/x17y7z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
