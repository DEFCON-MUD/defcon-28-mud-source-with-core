inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 29, 9 }));
  set_short( "Hallway - x5y29z9" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y30z9.c",
  "south" : DIR+"/rooms/x5y28z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
