inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 30, 7 }));
  set_short( "Hallway - x37y30z7" );
set_objects( DIR+"/monsters/eastmaintenaedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y30z7.c",
  "east" : DIR+"/rooms/x38y30z7.c",
  "north" : DIR+"/rooms/x37y31z7.c",
  "south" : DIR+"/rooms/x37y29z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, east, north, and west.%^RESET%^");
}
