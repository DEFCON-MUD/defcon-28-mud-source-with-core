inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 34, 5 }));
  set_short( "Hallway - x59y34z5" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y35z5.c",
  "south" : DIR+"/rooms/x59y33z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
