inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 42, 5 }));
  set_short( "Corridor - x55y42z5" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y42z5.c",
  "north" : DIR+"/rooms/x55y43z5.c",
  "south" : DIR+"/rooms/x55y41z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
