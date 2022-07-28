inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 48, 5 }));
  set_short( "Passage - x16y48z5" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y48z5.c",
  "east" : DIR+"/rooms/x17y48z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
