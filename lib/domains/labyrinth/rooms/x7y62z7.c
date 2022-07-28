inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 62, 7 }));
  set_short( "Passage - x7y62z7" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y62z7.c",
  "south" : DIR+"/rooms/x7y61z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crappy sales material in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
