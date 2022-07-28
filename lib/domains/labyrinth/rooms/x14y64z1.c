inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 64, 1 }));
  set_short( "Passage - x14y64z1" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y64z1.c",
  "east" : DIR+"/rooms/x15y64z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
