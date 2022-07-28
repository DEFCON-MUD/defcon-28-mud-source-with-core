inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 27, 6 }));
  set_short( "Corridor - x15y27z6" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y28z6.c",
  "south" : DIR+"/rooms/x15y26z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
