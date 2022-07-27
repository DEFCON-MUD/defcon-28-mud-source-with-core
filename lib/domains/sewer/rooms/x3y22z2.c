inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 22, 2 }));
  set_short( "Corridor - x3y22z2" );
set_objects( DIR+"/monsters/hkle.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y22z2.c",
  "south" : DIR+"/rooms/x3y21z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
