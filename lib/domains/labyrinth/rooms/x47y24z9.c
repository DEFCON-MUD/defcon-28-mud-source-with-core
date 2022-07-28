inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 24, 9 }));
  set_short( "Corridor - x47y24z9" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y24z9.c",
  "east" : DIR+"/rooms/x48y24z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
