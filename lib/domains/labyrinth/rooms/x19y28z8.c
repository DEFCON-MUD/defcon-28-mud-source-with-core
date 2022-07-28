inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 28, 8 }));
  set_short( "Corridor - x19y28z8" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y28z8.c",
  "south" : DIR+"/rooms/x19y27z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crappy sales material in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
