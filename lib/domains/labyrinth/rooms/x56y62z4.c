inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 62, 4 }));
  set_short( "Corridor - x56y62z4" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y62z4.c",
  "east" : DIR+"/rooms/x57y62z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
