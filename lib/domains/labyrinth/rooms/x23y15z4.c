inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 15, 4 }));
  set_short( "Passage - x23y15z4" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y16z4.c",
  "south" : DIR+"/rooms/x23y14z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
