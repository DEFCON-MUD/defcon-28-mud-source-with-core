inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 4, 6 }));
  set_short( "Corridor - x60y4z6" );
set_objects( DIR+"/monsters/sandworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y4z6.c",
  "east" : DIR+"/rooms/x61y4z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crappy sales material in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
