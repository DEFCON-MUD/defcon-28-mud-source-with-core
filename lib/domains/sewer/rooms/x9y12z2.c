inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 12, 2 }));
  set_short( "Corridor - x9y12z2" );
set_objects( DIR+"/monsters/carrierpigeon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y13z2.c",
  "south" : DIR+"/rooms/x9y11z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
