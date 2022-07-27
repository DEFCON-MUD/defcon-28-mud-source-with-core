inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 44, 1 }));
  set_short( "Corridor - x57y44z1" );
set_objects( DIR+"/monsters/agent.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y44z1.c",
  "south" : DIR+"/rooms/x57y43z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
