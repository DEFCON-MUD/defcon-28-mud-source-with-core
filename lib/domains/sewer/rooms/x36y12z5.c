inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 12, 5 }));
  set_short( "Corridor - x36y12z5" );
set_objects( DIR+"/monsters/slug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y12z5.c",
  "east" : DIR+"/rooms/x37y12z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
