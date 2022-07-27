inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 64, 8 }));
  set_short( "Corridor - x38y64z8" );
set_objects( DIR+"/monsters/deformedweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y64z8.c",
  "east" : DIR+"/rooms/x39y64z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
