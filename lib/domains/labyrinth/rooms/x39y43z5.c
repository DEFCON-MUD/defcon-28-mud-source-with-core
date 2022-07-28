inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 43, 5 }));
  set_short( "Hallway - x39y43z5" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y44z5.c",
  "south" : DIR+"/rooms/x39y42z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
