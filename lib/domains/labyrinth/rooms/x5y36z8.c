inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 36, 8 }));
  set_short( "Hallway - x5y36z8" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y36z8.c",
  "east" : DIR+"/rooms/x6y36z8.c",
  "north" : DIR+"/rooms/x5y37z8.c",
  "south" : DIR+"/rooms/x5y35z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the radioactive waste in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, east, north, and west.%^RESET%^");
}
