inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 8, 8 }));
  set_short( "Corridor - x41y8z8" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y8z8.c",
  "east" : DIR+"/rooms/x42y8z8.c",
  "north" : DIR+"/rooms/x41y9z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
