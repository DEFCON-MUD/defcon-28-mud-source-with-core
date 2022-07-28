inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 25, 3 }));
  set_short( "Passage - x13y25z3" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y26z3.c",
  "south" : DIR+"/rooms/x13y24z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
