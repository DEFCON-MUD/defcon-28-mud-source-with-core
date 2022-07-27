inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 50, 9 }));
  set_short( "Passage - x49y50z9" );
set_objects( DIR+"/monsters/autod.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y50z9.c",
  "north" : DIR+"/rooms/x49y51z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
