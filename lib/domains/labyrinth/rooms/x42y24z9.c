inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 24, 9 }));
  set_short( "Hallway - x42y24z9" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y24z9.c",
  "east" : DIR+"/rooms/x43y24z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
