inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 34, 5 }));
  set_short( "Hallway - x36y34z5" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y34z5.c",
  "east" : DIR+"/rooms/x37y34z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
