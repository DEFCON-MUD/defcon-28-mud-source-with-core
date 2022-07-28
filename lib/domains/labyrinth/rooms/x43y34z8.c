inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 34, 8 }));
  set_short( "Hallway - x43y34z8" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y34z8.c",
  "south" : DIR+"/rooms/x43y33z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
