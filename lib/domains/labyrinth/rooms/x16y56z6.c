inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 56, 6 }));
  set_short( "Corridor - x16y56z6" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y56z6.c",
  "east" : DIR+"/rooms/x17y56z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the glorzo in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
