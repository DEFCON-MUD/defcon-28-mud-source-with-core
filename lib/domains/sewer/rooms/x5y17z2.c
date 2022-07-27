inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 17, 2 }));
  set_short( "Hallway - x5y17z2" );
set_objects( DIR+"/monsters/rk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y18z2.c",
  "south" : DIR+"/rooms/x5y16z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
