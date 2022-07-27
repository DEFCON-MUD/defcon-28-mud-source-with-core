inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 28, 5 }));
  set_short( "Passage - x29y28z5" );
set_objects( DIR+"/monsters/easlerk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y28z5.c",
  "south" : DIR+"/rooms/x29y27z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
