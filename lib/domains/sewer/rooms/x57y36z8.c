inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 36, 8 }));
  set_short( "Hallway - x57y36z8" );
set_objects( DIR+"/monsters/lulams.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y36z8.c",
  "north" : DIR+"/rooms/x57y37z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
