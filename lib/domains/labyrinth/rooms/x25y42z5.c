inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 42, 5 }));
  set_short( "Corridor - x25y42z5" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y42z5.c",
  "north" : DIR+"/rooms/x25y43z5.c",
  "south" : DIR+"/rooms/x25y41z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
