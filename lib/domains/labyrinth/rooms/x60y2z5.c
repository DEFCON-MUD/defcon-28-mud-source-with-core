inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 2, 5 }));
  set_short( "Hallway - x60y2z5" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y2z5.c",
  "east" : DIR+"/rooms/x61y2z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
