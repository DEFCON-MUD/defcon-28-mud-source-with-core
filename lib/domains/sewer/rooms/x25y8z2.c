inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 8, 2 }));
  set_short( "Corridor - x25y8z2" );
set_objects( DIR+"/monsters/eastauthorizer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y8z2.c",
  "east" : DIR+"/rooms/x26y8z2.c",
  "south" : DIR+"/rooms/x25y7z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
