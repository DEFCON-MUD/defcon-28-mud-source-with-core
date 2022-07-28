inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 8, 8 }));
  set_short( "Hallway - x20y8z8" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y8z8.c",
  "east" : DIR+"/rooms/x21y8z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
