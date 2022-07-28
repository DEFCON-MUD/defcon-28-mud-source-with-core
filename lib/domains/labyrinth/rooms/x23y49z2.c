inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 49, 2 }));
  set_short( "Passage - x23y49z2" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y50z2.c",
  "south" : DIR+"/rooms/x23y48z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
