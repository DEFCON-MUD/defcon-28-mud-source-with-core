inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 62, 9 }));
  set_short( "Corridor - x15y62z9" );
set_objects( DIR+"/monsters/sandworm.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y62z9.c",
  "south" : DIR+"/rooms/x15y61z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
