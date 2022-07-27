inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 8, 6 }));
  set_short( "Passage - x49y8z6" );
set_objects( DIR+"/monsters/torga.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y8z6.c",
  "south" : DIR+"/rooms/x49y7z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the muck in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
