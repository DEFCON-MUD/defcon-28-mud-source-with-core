inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 58, 7 }));
  set_short( "Hallway - x61y58z7" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y58z7.c",
  "north" : DIR+"/rooms/x61y59z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
